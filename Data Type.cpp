int dataTypes(string type) {
	char types = type[0];
	switch(types){
		case 'I': return 4;
		case 'L': return 8;
		case 'F': return 4;
		case 'D': return 8;
		case 'C': return 1;
	}
}
