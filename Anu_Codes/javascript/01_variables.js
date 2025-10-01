const accountId=435676;
let accountEmail="ghju@gmail.com";
var accountPassword="4566878";
accountCity="pune";
let accountState;

//accountId=345; //not allowed

accountEmail="anush5@gmail.com";
accountPassword="18";
accountCity="Jaipur";

/* prefer not to use var
because of issue in block scope and functional scope
use only const and let */

console.log(accountId);
console.table([accountId,accountEmail,accountPassword,accountCity,accountState]);
