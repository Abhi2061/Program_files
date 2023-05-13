const prompt = require('prompt-sync')();

let num1 = parseInt(prompt("Enter the first number : "));
let num2 = parseInt(prompt("Enter the second number : "));

let ch = prompt("Enter the operation : ");

if(ch == '+')
    console.log("The Sum is : " , num1 + num2);

else if(ch == '-')
    console.log("The Difference is : ", num1 - num2);

else if(ch == '*')
    console.log("The Product is : ", num1 * num2);

else if(ch == '/')
    console.log("The Quotient is : ", num1 / num2);

else if(ch == '%')
    console.log("The Remainder is ", num1 % num2);
else
    console.log("Invalid Choice : ");