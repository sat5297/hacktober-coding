import cv2
import numpy as np

img = cv2.imread("resources/google.jpg")

width, height = 250, 250
pts = np.float32([[279,89],[307,89],[304,121],[284,122]])
pts2 = np.float32([[0,0],[width,0],[0,height],[width, height]])
matirx = cv2.getPerspectiveTransform(pts, pts2)
img_op = cv2.warpPerspective(img, matirx, (width, height))


#for loop for denoting the dots 
for x in range(4):
    cv2.circle(img, (pts[x][0], pts[x][1]),5,(0,0,255), cv2.FILLED)

cv2.imshow("Image", img)
cv2.imshow("Image_op", img_op)
cv2.waitKey(0)
