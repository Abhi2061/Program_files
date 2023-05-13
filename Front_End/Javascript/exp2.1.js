const prompt=require("prompt-sync")({sigint:true});

let num1 = prompt("Enter the first number : ");
let num2 = prompt("Enter the second number : ");

console.log("Enter your choice : \n1.Add \n2.Subtract \n3.Multiply \n4.Divide \n");

let ch = prompt()

if(ch == '1')
{
    console.log("Sum is : "+ (num1+num2));
}
else if(ch == '2')
{
    console.log("Difference is : " + (num1-num2));
}
else if(ch == '3')
{
    console.log("Product is : " + (num1*num2));
}
else 
{
    console.log("Division is : "+ (num1/num2));
}

