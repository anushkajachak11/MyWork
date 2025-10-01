//singleton

//object.create

//object literals

const mySym = Symbol("key1");
const jsUser = {
    name:"Anushka",
    "full name":"Anushka Jachak",
    [mySym] : "mykey1",
    email:"anushka12@google.com" ,
    location :"pune",
    isLoggedIn : true,
    lastLoginDays :["tuesday","sunday"]
}
// console.log(typeof jsUser);
// console.log(jsUser.email);
// console.log(jsUser["email"]);
// console.log(jsUser["full name"]);
// console.log(jsUser[mySym]);

// jsUser.email="anushmicrosoft@fh.com";
// Object.freeze(jsUser);
// jsUser.email="anushkachatgbt@GOOG.com";
//console.log(jsUser);

jsUser.greeting = function(){
    
    console.log("Hello JS user");
}

jsUser.greetingTwo = function(){
    
    console.log(`Hello JS user,${this.name}`);

}
console.log(jsUser.greeting());
console.log(jsUser.greetingTwo());


