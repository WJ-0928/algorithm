//设有n件工作分配给n个人。将工作i分配给第j个人所需的费用为cij 。 设计一个算法，对于给定的工作费用，为每一个人都分配1 件不同的工作，并使总费用达到最小。
//
//输入格式 :
//
//输入数据的第一行有1 个正整数n(1≤n≤20)。接下来的n行，每行n个数，表示工作费用。
//
//输出格式 :
//
//将计算出的最小总费用输出到屏幕。

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//void create_dict_map(map<int, vector<string>>& map_dict,
//	string s_raw,
//	vector<string> vs_dict) {
//	vector<string> vs_allocer;
//	for (int i = 0; i < vs_dict.size(); i++) {
//		int offset = s_raw.find(vs_dict[i]);
//		if (map_dict.find(offset) == map_dict.end())
//			map_dict[offset] = vs_allocer;
//		map_dict[offset].push_back(vs_dict[i]);
//	}
//}
//
//void
//parttern(map<int, vector<string>> map_dict,
//	int offset,
//	int raw_len,
//	vector<string>& vs_result,
//	vector<string>& vs_ret_res,
//	int& i_bool) {
//	if (map_dict.begin() == map_dict.end())
//		return;
//
//	for (auto auto_temp : map_dict[offset]) {
//		int i_dict_len = offset + auto_temp.length();
//		if (i_dict_len == raw_len) {
//			if (i_bool)
//				vs_ret_res.push_back(", ");
//
//			string s_res;
//			for (int i = 0; i < vs_result.size(); i++)
//				s_res += vs_result[i] + ' ';
//			s_res += auto_temp;
//			vs_ret_res.push_back(s_res);
//			i_bool = 1;
//
//			return;
//		}
//
//		vs_result.push_back(auto_temp);
//		parttern(map_dict, i_dict_len, raw_len, vs_result, vs_ret_res, i_bool);
//		vs_result.pop_back();
//	}
//}
//
//int main(int argc, char** argv) {
//	string s;
//	getline(cin, s);
//
//	vector<string> vs_dict;
//
//	string s_dict;
//	cin >> s_dict;
//	vs_dict.push_back(s_dict);
//	while (getchar() == ' ') {
//		cin >> s_dict;
//		vs_dict.push_back(s_dict);
//	}
//
//	map<int, vector<string>> map_dict;
//	create_dict_map(map_dict, s, vs_dict);
//
//	vector<string> result;
//	vector<string> vs_ret_res;
//	int i_bool = 0;
//
//	system("pause");
//	return 0;
//}