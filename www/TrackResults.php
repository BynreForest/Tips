<?php
require_once("includes/initialize.php");

 $one = $_POST['one'];
 $two = $_POST['two'];
 $three = $_POST['three'];
 $four = $_POST['four'];
 $five = $_POST['five'];
 $six = $_POST['six'];
 $seven = $_POST['seven'];
 $eight = $_POST['eight'];
 $nine = $_POST['nine'];
 $ten = $_POST['ten'];
 $eleven = $_POST['eleven'];
 $twelve = $_POST['twelve'];
 
 // Check database to see if username/password exist.
 User::insertAnswers($one,$two,$three,$four,$five,$six, $seven, $eight, $nine, $ten, $eleven, $twelve);
?>
