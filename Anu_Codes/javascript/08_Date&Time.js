let myDate = new Date()
// console.log(myDate.toDateString());
// console.log(myDate.toString());
//console.log(myDate.toLocaleString());

// console.log(typeof myDate);

//let myCreatedDate = new Date(2025,0,20);
//let myCreatedDate = new Date(2025,0,20,7,9);
let myCreatedDate = new Date("01-25-2025"); //(MM-DD-YY)

//console.log(myCreatedDate.toDateString());
//console.log(myCreatedDate.toString());
//console.log(myCreatedDate.toLocaleString());


let myTimeStamp = Date.now()  //Quizes,polls design keliye use karte hai
//console.log(myTimeStamp);
//console.log(myCreatedDate.getTime()); //milisecond
//console.log(Math.floor(Date.now()/1000));


let newDate = new Date()
console.log(newDate);
console.log(newDate.getDate());
console.log(newDate.getHours());
console.log(newDate.getMonth()+1);
console.log(newDate.getFullYear());
console.log(newDate.getTime());
console.log(newDate.getDay());