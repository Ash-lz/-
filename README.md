# test
55555555555555555555555555555555

# 1. 创建 README.md 文件（项目说明文档，内容为 "# test"）
echo "# test" >> README.md  

# 2. 初始化本地 Git 仓库（让当前目录变成 Git 可管理的项目）
git init  

# 3. 把 README.md 加入暂存区（准备提交）
git add README.md  

# 4. 提交暂存区文件到本地仓库，备注提交信息 "first commit"
git commit -m "first commit"  

# 5. 把默认分支名从 master 改为 main（GitHub 推荐的分支命名）
git branch -M main  

# 6. 关联 GitHub 远程仓库（origin 是远程仓库别名，后面跟仓库 SSH 地址）
git remote add origin git@github.com:用户名/test.git  

# 7. 把本地 main 分支推送到远程 origin 仓库，-u 绑定跟踪关系（后续可直接 git push）
git push -u origin main 
