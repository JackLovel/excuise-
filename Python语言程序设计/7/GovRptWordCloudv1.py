import jieba
import wordcloud

f = open("GovRptWordCloudv1.txt", "r", encoding="utf-8")

t = f.read()
f.close()

ls = jieba.lcut(t)
txt = " ".join(ls)
w = wordcloud.WordCloud(font_path = "yuppy.ttf",\
	                width = 1000, height = 700, background_color="white",\
)

w.generate(txt)
w.to_file("grwordcloud.png")
