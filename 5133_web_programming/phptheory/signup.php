<?php
$conn = mysqli_connect("localhost","root","","gptcpbvr");
$name = $_POST["name"];
$password = $_POST["password"];
$sql = "insert into phptheory values ('$name','$password');";
$result = $conn->query($sql);
if(!$result){
    echo "insertion failed";
}
else{
    echo "insertion successful";
}
