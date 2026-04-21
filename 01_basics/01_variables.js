const accountId = 12344321
let accountEmail = "Asmat@gmail.com"
var accountPassword = "9876"
accoutnCity = "Kolkata"
let accountState;

//accountId = 2.  // not allowed

console.log(accountId);

/*
prefer not to use var
because of issue in block scope and functional scope
*/

console.table([accountId, accountEmail, accountPassword, accountState])
