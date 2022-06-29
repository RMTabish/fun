

class String {
	char* data;
	int length;

public:
	//default
	String() {

	}

	String(int size) {
		length = size;
		data = new char(length);

	}

	String(char* str) {
		int i = 0;
		int size = 0;
		while (str[i] != '\0') {
			size++;
			i++;

		}
		length = size;
		data = new char(size);
		//copy data;
		int o = 0;
		while (str[o] != '\0') {
			data[o] = str[o];
			o++;

		}

	}
	String(const String& str) {
	//	length = str.length;
//		data = str.data;

		this->length = str.length;
		this->data = new char[length];
		for (int i = 0; i <= length; i++)
			* (this->data + i) = *(str.data + i);
		
	}

	~String(){
		delete data;
	}
	int strLength() {
		return length;

	}
	void clear() {
		length = 0;
		
		int l = 0;
		
		while (data[l] != '\0') {
			data[l] = '\0';
			l++;
		}
	}

	bool empty() {
		int o = 0;

		while (data[o] != '\0') {
			//data[o] = '\0';
			o++;
		}
		if (o > 0 && length != 0) {
			return true;
		}
		else
			return false;

	}
	int charAt(char c) {

		int t = 0;
		while (data[t] != '\0') {
			if (data[t] == c) {
				return t;
			}
			t++;
		}
	}
	char* getdata() {
		return data;
	}

	bool equals(char* str) {
		bool tell = false;
		
		int e = 0;
		while (data[e] != '\0'&& str[e] != '\0') {
			if (data[e] = str[e]) {
				tell = true;
			}
			else
				tell = false;
			
			e++;
		}
		if (tell == true) {
			return true;
		}
		else
			return false;

		
	}
	bool equalignoreCase(char* str) {
		int e = 0;
		bool tell = false;
		while (data[e] != '\0' && str[e] != '\0') {
			
			//checking for each element 
			if ((data[e] =='A'||data[e]=='a')&& (str[e] == 'A' || str[e] == 'a')) {
				tell = true;
			}
			else if ((data[e] == 'B' || data[e] == 'b') && (str[e] == 'B' || str[e] == 'b')) {
				tell = true;
			}
			if (data[e] = str[e]) {
				tell = true;
			}
			else if ((data[e] == 'C' || data[e] == 'c') && (str[e] == 'C' || str[e] == 'c')) {
				tell = true;
			}
			else if ((data[e] == 'D' || data[e] == 'd') && (str[e] == 'D' || str[e] == 'd')) {
				tell = true;
			}
			else if ((data[e] == 'E' || data[e] == 'e') && (str[e] == 'E' || str[e] == 'e')) {
				tell = true;
			}
			else if ((data[e] == 'F' || data[e] == 'f') && (str[e] == 'F' || str[e] == 'f')) {
				tell = true;
			}
			else if ((data[e] == 'G' || data[e] == 'g') && (str[e] == 'G' || str[e] == 'g')) {
				tell = true;
			}
			else if ((data[e] == 'H' || data[e] == 'h') && (str[e] == 'H' || str[e] == 'h')) {
				tell = true;
			}
			else if ((data[e] == 'i' || data[e] == 'I') && (str[e] == 'i' || str[e] == 'I')) {
				tell = true;
			}
			else if ((data[e] == 'J' || data[e] == 'j') && (str[e] == 'j' || str[e] == 'J')) {
				tell = true;
			}
			else if ((data[e] == 'K' || data[e] == 'k') && (str[e] == 'K' || str[e] == 'k')) {
				tell = true;
			}
			else if ((data[e] == 'L' || data[e] == 'l') && (str[e] == 'l' || str[e] == 'L')) {
				tell = true;
			}
			else if ((data[e] == 'M' || data[e] == 'm') && (str[e] == 'm' || str[e] == 'M')) {
				tell = true;
			}
			else if ((data[e] == 'n' || data[e] == 'N') && (str[e] == 'N' || str[e] == 'n')) {
				tell = true;
			}
			else if ((data[e] == 'o' || data[e] == 'O') && (str[e] == 'o' || str[e] == 'O')) {
				tell = true;
			}
			else if ((data[e] == 'P' || data[e] == 'p') && (str[e] == 'P' || str[e] == 'p')) {
				tell = true;
			}
			else if ((data[e] == 'Q' || data[e] == 'q') && (str[e] == 'Q' || str[e] == 'q')) {
				tell = true;
			}
			else if ((data[e] == 'r' || data[e] == 'R') && (str[e] == 'R' || str[e] == 'r')) {
				tell = true;
			}
			else if ((data[e] == 's' || data[e] == 'S') && (str[e] == 'S' || str[e] == 's')) {
				tell = true;
			}
			else if ((data[e] == 'T' || data[e] == 't') && (str[e] == 'T' || str[e] == 't')) {
				tell = true;
			}
			else if ((data[e] == 'u' || data[e] == 'U') && (str[e] == 'u' || str[e] == 'U')) {
				tell = true;
			}
			else if ((data[e] == 'V' || data[e] == 'v') && (str[e] == 'V' || str[e] == 'v')) {
				tell = true;
			}
			else if ((data[e] == 'w' || data[e] == 'W') && (str[e] == 'W' || str[e] == 'w')) {
				tell = true;
			}
			else if ((data[e] == 'X' || data[e] == 'x') && (str[e] == 'X' || str[e] == 'x')) {
				tell = true;
			}
			else if ((data[e] == 'y' || data[e] == 'Y') && (str[e] == 'y' || str[e] == 'Y')) {
				tell = true;
			}
			else if ((data[e] == 'z' || data[e] == 'Z') && (str[e] == 'Z' || str[e] == 'z')) {
				tell = true;
			}
	
			else
				tell = false;

			e++;
		}
	}
	char* substring(char* substr, int startIndex) {
		int y = 0;
		bool jin=false;
		for (int i = startIndex; data[i] != '\0'; i++) {
			
			if (data[i]==substr[0]) {
				bool jin = true;
		

			}
			if (jin == true) {
				y++;
			}
			
		}

		char*p = new char(y);
		bool dodo = false;
		int ip=0;
		for (int i = startIndex; data[i] != '\0'; i++) {

			if (data[i] == substr[0])
			{
				dodo = true;
			}
			if (dodo == true) {
				p[ip] = data[i];
				ip++;
		}
		
		}
		return p;
		
	}




};