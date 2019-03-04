//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class Solution{
//public:
//	int TheMaxAverage(vector<int> array, int num){
//		sort(array.begin(), array.end());
//		int temp = num;
//		int result = 0;
//		int i = array.size() - 2;
//		while (temp > 0){
//			result += array[i];
//			i -= 2;
//			--temp;
//		}
//		return result;
//	}
//};
//
//int main(){
//	int input = 0;
//	cin >> input;
//	int i = 0;
//	if (input <= 0){
//		cout << 0 << endl;
//		return 0;
//	}
//	vector<int> array;
//	array.resize(3 * input);
//	for (i = 0; i < 3 * input; ++i){
//		int temp = 0;
//		cin >> temp;
//		array[i] = temp;
//	}
//	Solution s;
//	int result = s.TheMaxAverage(array, input);
//	cout << result << endl;
//	system("pause");
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s = "hello world";
//	char* cur = "hello world";
//	cout << (int)s.find('a');
//
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
	string& StrResult(string s1, string s2){
		const char *temp = s2.c_str();
		int pos = 0;
		while (*temp != '\0'){
			const char * cur = temp;
			while (-1 != (pos = (int)s1.find(*temp))){
				s1.erase(pos, 1);
				cur++;
			}
			++temp;
		}
		return s1;
	}
};

int main(){
	string str1;
	cin >> str1;
	string str2;
	cin >> str2;
	string result = "";
	Solution s;
	result = s.StrResult(str1, str2);
	
	cout << result << endl;
	system("pause");
	return 0;
}