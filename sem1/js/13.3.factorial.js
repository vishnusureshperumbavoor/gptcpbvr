num=5
factorial = (num) => {
  if (num == 1) return 1;
  else return num * factorial(num - 1);
};
console.log("factorial = ", factorial(num));