alien = {
  name: "vsp",
  age: 22,
  tech: function () {
    console.log(this.name);
    console.log(alien.name);
  },
};
alien.tech();

// this is used to access the object property
