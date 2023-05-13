const prompt = require('prompt-sync')();

let ch;

do{
    console.log("Random number is : ", Math.ceil(Math.random()*10));
    ch = prompt("Enter Y/y to print next random number : ");
}while(ch == 'Y' || ch == 'y');

