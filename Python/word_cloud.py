import matplotlib.pyplot as plt

from wordcloud import WordCloud, STOPWORDS
import numpy as np
from PIL import Image

text = open(r'Python/Text.txt', mode = 'r', encoding='utf-8').read()

mask = np.array(Image.open(r'Python/gfg.png'))

wc = WordCloud(stopwords=STOPWORDS,
    mask = mask,
    background_color="white",
    max_words=2000,
    max_font_size=500,
    random_state=42,
    width=mask.shape[1],
    height=mask.shape[0])

wc.generate(text)
plt.imshow(wc, interpolation = "None")
plt.axis('off')
plt.show()