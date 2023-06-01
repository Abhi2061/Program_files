const fs = require('fs');

const content = 'Hello Sumit';

console.log("This program write something");

try {
  fs.writeFileSync('Node_JS/welcome.txt', content);
  // file written successfully
} catch (err) {
  console.error(err);
}

console.log("Writing Done");