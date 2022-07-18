
/*
Using return
*/
function minusSeven(num){
  return num - 7
}

console.log(minusSeven(10))

function timesFive(num){
  return num * 5
}

console.log(timesFive(10))

/*
This kind of function cannot log it
*/
var sum = 0
function addThree(){
  sum = sum + 3
}

function addFive(){
  sum += 5
}

/*
Assignment with a returned value
*/

var changed = 0

function change(num){
  return (num+5)/3
}

changed = change(10)

var processed = 0

function processArg(num){
  return (num + 3) / 5;
}

processed = processArg(10)

console.log(processed)


/* Stand in line */

function nextInLine(arr, item){
  // my Code here
  arr.push(item)

  return arr.shift()
}

var testArr = [1,2,3,4,5];

console.log("Before: " + JSON.stringify(testArr))
console.log(nextInLine(testArr,6))
console.log("After: " + JSON.stringify(testArr))

/* Boolean value */
