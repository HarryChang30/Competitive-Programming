#include <bits/stdc++.h>

using namespace std;

struct Node{
	
	int data;
	struct Node* next;
};

bool has_cycle(Node* head){
	
	Node* faster = head->next;
	Node* slower = head;
	
	while(faster != NULL && slower != NULL && faster->next != NULL)
	{
		if(slower == faster)
			return true;
		
		faster = faster->next->next;
		slower = slower->next;
	}
	
	return false;
}

int main()
{
	return 0;
}
