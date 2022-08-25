// age comparison
vsp = {
  name: "vsp",
  age: 22,
  compare: function (other) {
    if(this.age > other.age)
        return this 
    else 
        return other
  }
};
elon = {
    name: "elon",
    age: 50,
    compare: function (other) {
      if(this.age > other.age)
          return this 
      else 
          return other
    }
};
console.log(vsp.compare(elon))
