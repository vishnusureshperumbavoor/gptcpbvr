<?php
$conn = mysqli_connect("localhost","root","","gptcpbvr");
if(!$conn){
    echo "connection error";
}else{
    echo "connection successfull";
}