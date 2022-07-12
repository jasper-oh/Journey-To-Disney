// Local Scope

function myLocalScope(){
    var myVar = 5; // Only visible in the function.
    console.log(myVar)
}
myLocalScope()

//Global and Local Scope in Functions
var outerWear = "T-Shirts"

function myOutfit(){
    var outerWear = "sweater"
    return outerWear;
}

//Because this local variable outerWear took precedence over the global variable.
console.log(myOutfit())
