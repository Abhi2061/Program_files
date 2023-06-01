console.log("This program reads data from file \n");

const fs = require('fs');

console.log("Before Reading \n");

fs.readFile('Node_JS/welcome.txt', 'utf-8', (err, data) => {
    console.log(data, "\n");

    console.log("After Reading");
});