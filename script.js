function createTable(form)
{
//Multiplication questions
let a,b;
//get values from the user through the form
let num = form.ques.value;
let ques = form.digit.value;
if(ques>3) { window.alert(" Enter a number less than 4 ");}
//creating number of questions user entered
for(let i=num;i>=1;i--)
{    
var x=document.getElementById('myTable').insertRow(0);
var cell1 = x.insertCell(0);
var cell2 = x.insertCell(1);
//Selecting how many digits the user selected
switch(ques)
{
case '1':
a=Math.floor(Math.random()*8)+1;
b=Math.floor(Math.random()*7)+2;
cell1.innerHTML = "Ques :- "+i;
cell2.innerHTML = a+"*"+b+" = ?";
break;

case '2':
a=Math.floor(Math.random()*90)+9;
b=Math.floor(Math.random()*80)+10;
cell1.innerHTML = "Ques :- "+i;
cell2.innerHTML = a+"*"+b+" = ?";
break;

case '3':
a=Math.floor(Math.random()*800)+100;
b=Math.floor(Math.random()*700)+100;
cell1.innerHTML = "Ques :- "+i;
cell2.innerHTML = a+"*"+b+" = ? ";
break;
}
}
}