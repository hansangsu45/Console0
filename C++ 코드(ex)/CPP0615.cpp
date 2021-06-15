#include<iostream>
using namespace std;

#define NODECOUNT 30

struct Tree
{
	bool chk;
	int left;
	int right;
	int parent;
};

Tree tree[NODECOUNT];
int pre[NODECOUNT];
int post[NODECOUNT];
int n;

void getTree(int num)
{
	int now = pre[num];
	tree[now].chk = true;
	int temp = 0;

	while (temp <= n && post[temp] != pre[num + 1])	temp++;
	if (temp > n) return;

	if (tree[temp].parent == -1) {
		tree[now].left = post[temp];
		tree[temp].parent = now;
	}

	while (temp <= n && post[temp] != pre[num]) temp++;
	if (temp > n) return;

	if (tree[temp - 1].parent == -1) {
		tree[now].right = post[temp - 1];
		tree[temp - 1].parent = now;
	}

	for (int i = 0; i < n; i++) {
		if (pre[i] == tree[now].left) getTree(i);
	}
	for (int i = 0; i < n; i++) {
		if (pre[i] == tree[now].right) getTree(i);
	}
}

void InorderTraverse(int now)
{
	if (now == -1 || !tree[now].chk) return;

	InorderTraverse(tree[now].left);
	cout << now << " ";
	InorderTraverse(tree[now].right);
}

int main()
{
	for (int i = 0; i < NODECOUNT; i++)
	{
		tree[i].chk = false;
		tree[i].right = -1;
		tree[i].left = -1;
		tree[i].parent = -1;
	}

	fill(pre, pre + NODECOUNT, -1);
	fill(post, post + NODECOUNT, -1);

	cout << "정점 수(30개 미만으로 자연수만): ";
	cin >> n;

	cout << "전위순회: ";
	for (int i = 0; i < n; i++) {
		cin >> pre[i];
	}

	cout << "후위순회: ";
	for (int i = 0; i < n; i++) {
		cin >> post[i];
	}

	getTree(0);

	cout << "중위순회: ";
	InorderTraverse(pre[0]);
}