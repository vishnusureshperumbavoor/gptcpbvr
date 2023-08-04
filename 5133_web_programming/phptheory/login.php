<?php
$conn = mysqli_connect("localhost","root","","gptcpbvr");
$name = $_POST["name"];
$password = $_POST["password"];
$sql = "select * from phptheory where name = '$name' and password = '$password';";
$result = $conn->query($sql);
$numrows = $result->num_rows;
if($numrows==0){
    echo "user does not exits";
}
else{
    echo "user exists";
}