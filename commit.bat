@echo off
chcp 65001 >nul
set /p commit_msg="请输入提交信息（例如：day01: 快速排序）："
git add .
git commit -m "%commit_msg%"
git push origin main
echo 提交完成！按任意键退出...
pause >nul