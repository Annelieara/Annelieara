const express = require('express');
const bodyParser = require('body-parser');
const mysql = require('mysql');
const path = require('path');

const app = express();
const port = 3000;

// Parse URL-encoded bodies (as sent by HTML forms)
app.use(bodyParser.urlencoded({ extended: true }));

// Create MySQL connection pool
const pool = mysql.createPool({
    connectionLimit: 10,
    host: 'localhost:3306',
    user: 'root',
    password: 'marypriya',
    database: 'data_fb'
});

// Route handler for serving the HTML form
app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, './Register.html'));
});

// Route to handle form submission
app.post('/submit', (req, res) => {
    // Extract form data from the request
    const { name, email, password } = req.body;

    // Execute the SQL query to insert data into the database
    const sql = 'INSERT INTO user_data (name, email, password) VALUES (?, ?, ?)';
    pool.query(sql, [name, email, password], (error, results) => {
        if (error) {
            console.error('Error occurred while inserting data', error);
            res.status(500).send('Error occurred while inserting data');
            return;
        }

        console.log('Data inserted successfully');
        res.status(200).send('Data inserted successfully');
    });
});

// Start the server
app.listen(port, () => {
    console.log(`Server is running on http://localhost:${port}`);
});
