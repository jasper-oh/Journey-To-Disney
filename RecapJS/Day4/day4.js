
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

function welcomeToBooleans(){
  return false
}

/* Use Conditional Logic with If statements */

function ourTrueOrFalse(isItTrue){
  if(isItTrue){
    return "Yes"
  }
  return "No"
}

function trueOrFalse(wasThatTure){
  if (wasThatTure){
    return "Yes"
  }

  return "No"
}

console.log(trueOrFalse(true))

/* Equality Operators */

function testEqual(val){
  if (val == 12){
    return "Equal"
  }
  return "Not Equal"
}

console.log(testEqual(10))

/* Few description about differences point between == and ===
  first, == is equal when the value was same but in case of ===
  the type should be match.
  Furthermore, = is assignment sign
*/


/* Comparison with the Strict Equality Operator */

function testStrict(val){
  if(val ===  10){
    return "Equal"
  }
  return "Not Equal"
}

testStrict(10)

/* Practice Comparing Different Values */
function compareEquality(a,b){
  if(a==b){
    return "Equal"
  }
  return "Not Equal"
}
console.log(compareEquality(10, "10"))

/* And / Or Operator */

function testLogicalAnd(val){
  if(val){
    return "Yes"
  }

  return "No"
}

testLogicalAnd(10)
