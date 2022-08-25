aliens = function(name, technology){
  this.name = name;
  this.technology = technology;
  this.work = function job(){
    console.log("narcissism");
  }
};
let alien1 = new aliens('vsp','js')
let alien2 = new aliens('elon','space')
console.log(alien1)
console.log(alien2);
alien1.work()

// arrow function cannot be a constructor