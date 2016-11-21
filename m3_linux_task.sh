wget -q -O - http://www.baidu.com|grep -o "http:.*" | 
grep -E -v "www.baidu.com"> rbc.txt