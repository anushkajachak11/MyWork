const score = 500;
//console.log(score);

const balance = new Number(900);
//console.log(balance);

//console.log(balance.toString().length);
//console.log(balance.toFixed(6));

const otherNumber = 34.56;
//console.log(otherNumber.toPrecision(6));

const hundreads = 1000000
//console.log(hundreads.toLocaleString('en-IN'));


//Number 
//toString
//toFixed
//toPrecision
//new Number
//toLocalString


//++++++++++++++++++++++++Maths+++++++++++++++++++++++++//


console.log(Math);
console.log(Math.abs(-7));
console.log(Math.abs(6));
console.log(Math.round(6.6));
console.log(Math.ceil(8.2));
console.log(Math.floor(4.5));
console.log(Math.max(2,8,1,3));
console.log(Math.min(2,6,8,3));

console.log(Math.random()); //0-1 ke bich mai value ayegi
console.log((Math.random()*10)+1);
console.log(Math.floor(Math.random()*10)+1)

const min = 20;
const max = 50;

console.log(Math.floor(Math.random() * (max-min + 1)) + min);
