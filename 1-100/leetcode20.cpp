//�������������֤������ַ����Ƿ�Ϊ�����ַ��������������ţ������ź�С���š�
//������Ҫ��һ��ջ����ʼ���������ַ����������ǰ�ַ�Ϊ��������ʱ������ѹ��ջ�У���������Ұ������ʱ
//����ʱջΪ�գ���ֱ�ӷ���false���粻Ϊ�գ���ȡ��ջ��Ԫ�أ���Ϊ��Ӧ���������ţ������ѭ������֮����false

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
                parentheses.push(s[i]);
            else {
                if (parentheses.empty()) return false;
                if (s[i] == ')' && parentheses.top() != '(') return false;
                if (s[i] == ']' && parentheses.top() != '[') return false;
                if (s[i] == '}' && parentheses.top() != '{') return false;
                parentheses.pop();
            }
        }
        return parentheses.empty();
    }
}; 
