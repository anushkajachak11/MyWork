//prconst imitive datatypes

// const score = 99
//const scoreValue=99.23

//const isLoggedIn = true
//const ourSideTemp = null
// let userEmail;
// console.log(userEmail);

//const id = Symbol('344')
//const anotherId = Symbol('344')

//console.log(id == anotherId);


// const bigNumber = 2378799276790657n;
// console.log(typeof bigNumber);


//Non-Primitive Datatypes

//Array
// const heros = ["shaktiman","naagraj","doga"];
// console.log(heros);


//Object
// let myObj = {
//     name:"Anushka",
//     age:20,
// }
// console.log(myObj);


//Function
// const myFunction = function(){
//     console.log("Hello,world");
// }


//+++++++++++++++++++++++++++++++++++++++++++++


//stack and heap memory

// let myYoutubeName = "VibeswithAnu";

// let anotherName = myYoutubeName;
// anotherName = "Anushka Jachak";

//console.log(myYoutubeName);
//console.log(anotherName);


let userOne = {
    email:"user34@google.com",
    upi:"user@nhy",
}

let userTwo= userOne;

userTwo.email = "anujachak345@google.com";

console.log(userOne.email);
console.log(userTwo.email);

