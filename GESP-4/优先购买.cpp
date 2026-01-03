/*
题目描述

小 A 有 M 元预算。商店有 N 个商品，每个商品有商品名 S、价格 P 和优先级 V 三种属性，其中 V 为正整数，且 V 越小代表商品的优先级越高。
小 A 的购物策略为：

总是优先购买 优先级最高 的商品；
如果有多个优先级最高的商品，购买 价格最低 的；
如果有多个优先级最高且价格最低的商品，购买 商品名字典序最小 的。
小 A 想知道自己最终能购买哪些商品。
输入格式
第一行两个正整数 M、N，分别表示预算和商品数量。
接下来 N 行，每行包含一个商品的信息，依次为：
Si Pi Vi
表示第 i 个商品的商品名、价格和优先级。

数据保证不存在两个名字相同的商品。

输出格式

按照 字典序从小到大 的顺序，输出所有被购买商品的商品名，每行一个。

样例输入
20 4
apple 6 8
bus 15 1
cab 1 10
water 4 8

样例输出
bus
cab
water
*/

#include <bits/stdc++.h>
using namespace std;

struct Product
{
	string name;
	int price;
	int priority;
};

Product a[1001];
string answer[1001];

bool cmp(Product a, Product b)
{
	if(a.priority != b.priority)
	{
		return a.priority < b.priority;
	}
	if(a.price != b.price)
	{
		return a.price < b.price;
	}
	return a.name < b.name;
}

int main()
{
	int m,n;
	cin >> m >> n;

	int cnt = 0;
	int sum = 0;

	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].name >> a[i].price >> a[i].priority;
	}

	sort(a + 1, a + n + 1, cmp);

	for(int i = 1; i <= n; i++)
	{
		if(sum + a[i].price <= m)
		{
			answer[++cnt] = a[i].name;
			sum += a[i].price;
		}
	}

	sort(answer + 1, answer + cnt + 1);

	for(int i = 1; i <= cnt; i++)
	{
		cout << answer[i] << endl;
	}

	return 0;
}
