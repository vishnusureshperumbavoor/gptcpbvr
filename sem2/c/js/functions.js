function hello() {
  return "normal function"
}
hello2 = function () {
  return "anonymous function";
};
hello3 = () => {
  return "arrow function";
};
hello5 = () => {
  return "function expression";
};
hello4 = hello5;
console.log(hello());
console.log(hello2());
console.log(hello3());
console.log(hello4());
