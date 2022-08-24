var regno = 20130132;
var name = "Vishnu Suresh";
var mark = 72;
switch(Math.floor(mark/10)){
    case '10':
        grade = "S";
        break;
    case '9':
        grade = "S"
        break;
    case 8:
        grade = "A";
        break;
    case 7:
        grade = "B"
        break;
    case 6:
        grade = "C";
        break;
    case 5:
        grade = "D"
        break;
    case 4:
        grade = "E";
        break;
    default:
        grade = "Failed"
        break;
}
console.log("regno : "+regno)
console.log("name : "+name)
console.log("mark : ",mark)
console.log("grade : "+grade)
