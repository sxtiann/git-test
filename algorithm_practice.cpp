
# on master

int binarySearch(std::vector<int> v,int x){
	if(v.size() = 0){
		return -1;
	}


}


int searchInRotatedArrayHelper(int array[],int left,int right, int target){
	if(left > right){
		return -1;
	}

	int mid = right - (right - left) / 2;
	int (array[mid] == target){
		return mid;
	}

	if(array[left] <= array[mid]){

	}


}

int searchInRotatedArray(int array[],int n,int target){
	return searchInRotatedArrayHelper(array,0,n-1,target);
}


int searchRangeHelper(int array[], int left, int right,int target,int &begin, int &end){
	int(left > right)
		return;

	int mid = right - (right - left) / 2;
	int(array[mid] == target){
		if(mid < begin || begin == -1){
			begin = mid;
		}

		if(mid > end || end == -1){
			end = mid
		}

		searchRange(array,left,mid-1,target,begin,end);
		searchRange(array,mid+1,right,target,begin,end);
	}
	else if (array[mid] < target)
	{
		searchRangeHelper(array,mid + 1,right,target,begin,end);
	}
	else{
		searchRangeHelper(array,left,mid - 1,target,begin,end);
	}


}

std::vector<int> searchRange(int array[], int n,int target){
	int begin = -1, end = -1;
	searchRangeHelper(array,0,n-1,target,begin,end);
	std::vector<int> res;
	res.push_back(begin);
	res.push_back(end);
	return res;

}


bool isElementInMatrix(int **matrix,int M,int N,int target){
	int row = 0;
	int col = N - 1;
	while(row < M && col >= 0 ){
		if(matrix[row][col] == target){
			return true;
		}
		else if (matrix[row][col] < target)
		{
			row++;
		}
		else{
			col++;
		}
	}
	return false;
}


double mySqrtHelper(double x,double lowBound,double highBound){
	double precision = .00001;
	double sqrt = lowBound / 2 + highBound / 2;
	if(abs(sqrt * sqrt - x) < precision){
		return sqrt
	}
	else if (sqrt * sqrt > x)
	{
		return mySqrtHelper(x,lowBound,sqrt);
	}
	else{
		return mySqrtHelper(x,sqrt,highBound);
	}
}


struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

class Solution
{
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB){
public:

	}
	
};



using namespace std;

std::set<int> test_set;

const int a_len = 7;
const int b_len = 8;

int a[a_len] = {4,2,5,1,2,4,9};
int b[b_len] = {2,7,6,3,1,6,0,1}

for (int i = 0; i < a_len; ++i)
{
	test_set.insert(a[i]);
}


for (int i = 0; i < b_len; ++i)
{
	if (test_set.find(b[i]) != test_set.end())
	{
		printf("b[%d] = %d in array a.\n", i,b[i]);
	}
}


ListNode* getIntersectionNode(ListNode* headA, ListNode* headB){
	std::set<ListNode*> node_set;
	while(headA){
		node_set.insert(headA);
		headA = headA->next;
	}

	while(headB){
		if (node_set.find(headB) != node_set.end())
		{
			return headB;
		}
		headB = headB->next;
	}

	return NULL;
}

int main(){
	ListNode a1(1);
	ListNode a2(2);

	ListNode b1(4);
	ListNode b2(2);

	ListNode c1(3);

	a1.next = &a2;
	a2.next = &c1;

	b1.next = &b2;
	b2.next = &c1;

	return 0;
}


class minStack{
public:
	minStack(){

	}

	void push(int x){
		_data.push(x);

		if(_min.empty()){
			_min.push(x);
		}
		else{
			if(x > _min.top()){
				x = _min.top();
			}
			_min.push(x);
		}

	}

	void pop(){
		_data.pop();
		_min.pop();
	}

	int top(){
		return _data.top();
	}

	int getMin(){
		return _min.top();
	}

private:
	std::stack<int> _data;
	std::stack<int> _min;
}


int main(){
	std::stack<int> S;
	S.push(10);
	S.push(5);
	S.push(6);


	printf("S top = %d\n", S.top());
	S.pop();
	printf("S top = %d\n", S.top());
	return 0;
}


string removeKDigits(string num, int k){
	std::vector<int> s;
	string result = "";
	for (int i = 0; i < num.length(); ++i)
	{
		int number = num[i] - '0';
		while(s.size() != 0 && s[s.size() - 1] > number && k > 0 ){
			s.pop_back();
			k--;
		}
		if(number != 0 || s.size() != 0){
			s.push_back(number);
		}
	}

	while(s.size() ! = 0 && k > 0){
		s.pop_back();
		k--;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		result  += s[i] + '0'; // result.append(1,'0' + s[i])
	}

	if (result = "")
	{
		result = "0";
	}

	return result;
}


struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};


//二叉树遍历，深度优先遍历

class Solution
{
public:
	TreeNode* lowestCommonAncester(TreeNode* root,TreeNode* p,TreeNode*q)
	{

	}	
};

void preorder(TreeNode* node, TreeNode* search,std::vector<TreeNode*> &path
							std::vector<TreeNode*> result, int &finish){
	if(!node || finish){
		return;
	}

	path.push_back(node); //先序遍历加入栈

	if (node == search)
	{
		finish = 1;
		result = path;
	}

	preorder(node->left,search,path,result,finish);

	preorder(node->right,search,path,result,finish);

	path.pop_back();
}


TreeNode* lowestCommonAncester(TreeNode* root, TreeNode* p,TreeNode* q){
	std::vector<TreeNode*> path;
	std::vector<TreeNode*> node_p_path;
	std::vector<TreeNode*> node_q_path;

	int finish = 0;

	preorder(root,p,path,node_p_path,finish);
	path.clear;
	finish = 0;
	preorder(root,q,path,node_q_path,finish);
	int path_len = 0;




}


bool is_window_ok(int map_s[],int map_t[],std::vector<int> &vec_t){
	for (int i = 0; i < vec_t.size(); ++i)
	{
		if(map_s[vec_t[i]] < map_t[vec_t[i]]){
			return false;
		}
	}
	return ture;
}


int main(){
	string s = "ABOBECODEBANC";
	string t = "ABCDAB";

	const int MAX_ARRAY_LEN = 128;
	int map_t[MAX_ARRAY_LEN] = {0};
	int map_s[MAX_ARRAY_LEN] = {0};

	std::vector<int> vec_t;
	for (int i = 0; i < s.length; ++i)
	{
		map_s[t[i]]++;
	}

	for (int i = 0; i < t.length; ++i)
	{
		map_t[t[i]]++;
	}

	for (int i = 0; i < MAX_ARRAY_LEN; ++i)
	{
		if (map_t[i] > 0)
		{
			vec_t.push_back(i);
		}
	}
}






















































































