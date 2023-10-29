let a = 5;
console.log(a);
changeValue(a);
console.log(a);
a = changeAndReturnValue(a);
console.log(a);

function changeValue(variable) {
    variable += 10;
    console.log(variable);
}

function changeAndReturnValue(variable) {
    return variable + 10;
}