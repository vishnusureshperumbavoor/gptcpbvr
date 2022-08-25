num = [1, 2, 3, 4, 5, "vsp"];
console.log(num.filter((n) => n % 2 === 0));
num
  .filter((n) => n % 2 === 0)
  .forEach((n) => {
    console.log(n);
  });
