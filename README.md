# test
55555555555555555555555555555555

# 1. ���� README.md �ļ�����Ŀ˵���ĵ�������Ϊ "# test"��
echo "# test" >> README.md  

# 2. ��ʼ������ Git �ֿ⣨�õ�ǰĿ¼��� Git �ɹ������Ŀ��
git init  

# 3. �� README.md �����ݴ�����׼���ύ��
git add README.md  

# 4. �ύ�ݴ����ļ������زֿ⣬��ע�ύ��Ϣ "first commit"
git commit -m "first commit"  

# 5. ��Ĭ�Ϸ�֧���� master ��Ϊ main��GitHub �Ƽ��ķ�֧������
git branch -M main  

# 6. ���� GitHub Զ�ֿ̲⣨origin ��Զ�ֿ̲������������ֿ� SSH ��ַ��
git remote add origin git@github.com:�û���/test.git  

# 7. �ѱ��� main ��֧���͵�Զ�� origin �ֿ⣬-u �󶨸��ٹ�ϵ��������ֱ�� git push��
git push -u origin main 
