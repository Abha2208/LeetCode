#define MAX 100000
int stack[MAX];
int top = -1;
void push(int val) {
    stack[++top] = val;
}
int pop() {
    return stack[top--];
}
int peek() {
    return stack[top];
}
int isEmpty() {
    return top == -1;
}
int longestValidParentheses(char* s) {
    int maxLen = 0;
    top = -1;
    push(-1); 
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            push(i);
        } else {
            pop();
            if (isEmpty()) {
                push(i); 
            } else {
                int len = i - peek();
                if (len > maxLen) maxLen = len;
            }
        }
    }
    return maxLen;
}