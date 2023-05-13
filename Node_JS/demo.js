function tester() {
	var message;

	if (confirm("Press a buttion!")) {
		message = "You pressed OK!";
	} else {
		message = "You pressed Cancel!";
	}
	console.log(message);
	
	alert("Hello! I am an alert box!");
}

tester();

