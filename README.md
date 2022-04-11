### 关于`Failed to connect to github.com port 443`的解决办法

[参考](https://blog.csdn.net/qq_34817440/article/details/106420689)

在本地向git push时显示如下报错(部分内容)
```shell
Failed to connect to github.com port 443
```

#### 问题原因
因为翻墙使用clash时打开了代理

#### 解决方法

1.打开设置-网络-VPN-网络代理, 点击齿轮图表,查看自己因为翻墙设置的`http代理`和`https代理`的设置参数
2.记住这两个代理的参数, 然后在下面的命令中作相应的更改即可
```Shell
git config --global http.proxy 127.0.0.1:7890

git config --global https.proxy 127.0.0.1:7890
```