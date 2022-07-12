/*TODO
1. Find out what is immutaility of stings.
2. Is this feature applied in most of the computing language?
*/

//Set up
var myStr = "Jello World";
// Only change code below this line
myStr[0] = "H"; // Error because the immutability of strings
//->
myStr = "Hello World"

console.log(myStr[0])
console.log(myStr[myStr.length - 1])

function worldBlanks(myNoun, myAdjective, myVerb, myAdverb){
    var result = myAdjective + " " + myNoun + " " + myVerb + " " + myAdverb;

    return result;
}

console.log(worldBlanks("dog" , "big" , "ran" , "quickly"))
console.log(worldBlanks("slow" , "bike" , "flew" , "slowly"))

var johnArray = ["John" , 23]

var quincyArray = ["Quincy" , 1];

//nested Array, multi-dimensional array
var ourArray = [["the universe" , 42],["everything", 101010]];

// Example
var array1 = [50,60,70]
var data = array1[0]


//Different with the string, the array can be modified with this method.
ourArray = [18,64,99]
ourArray[0] = 45

console.log(ourArray)

//apply to the multi-dimentional array
var array2 = [[1,2,3] , [4,5,6] , [7,8,9] , [[10,11,12] , 13 ,14]]
var myData3 = array2[3][0][0]
console.log(myData3)

// Manipulate Arrays with push()
var array0 = [1,2,3,4]
array0.push(5)
console.log(array0)

//Manipulate Arrays with pop()
array0.pop()
console.log(array0)

//Manipulate Arrays with shift() -> Shift basically pop the first element
console.log(array0.shift())
console.log(array0)

//Manipulate Array with unshift() -> adds at element to the beginning of the array.
console.log("why this showing number 4?" , array0.unshift("some integer"))
//But why console.log it, it shows number 4 ? -> because it returns the total length of the new array.
console.log(array0)


var totallyNewArray = ["This" , "is" , "new" , "array"]
console.log(totallyNewArray.unshift("However,"))
console.log(totallyNewArray)

var myShoppingList = [["cereal" , 3] , ["milk"] , 2 , ["banana" , 3], ["juice" , 2] , ["eggs" , 12]]

//Function

function ourReusableFunction(){
    console.log("Heyya, World")
}
ourReusableFunction();

function reusableFunction(){
    console.log("Hi, world")
}

reusableFunction();

//Using the parameters
function ourFunctionWithArgs(a, b){
    console.log(a-b)
}

ourFunctionWithArgs(10,2)

function functionWithArgs(a,b){
    console.log(a + b)
}
functionWithArgs(10,2)

//Global Scope and Functions -> Scope refers to the visibility of variables.
var myGlobal = 10;


function fun1(){

    oopsGlobal = 5

}

function fun2(){
    var output = ""
    if(typeof myGlobal != "undefined"){
        output += "myGlobal: " + myGlobal
    }

    if(typeof oopsGlobal != "undefined"){
        output += "myGlobal: " + myGlobal
    }

    console.log(output)
}