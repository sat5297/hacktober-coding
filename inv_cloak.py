'''
    This project is done using only openCV.
    No Machine Learning or Deep Learning concepts/algos have been used.

'''
import cv2
import numpy as np

cam = cv2.VideoCapture(0)   #captures the video.

i = 0

while i<50:
    i+=1
    _, background = cam.read()
replace = cv2.resize(background,(1000,1000))


while True:
    _,frame = cam.read()
    frame = cv2.resize(frame,(1000,1000))

    hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)

    lower_blue = np.array([64,74,0])
    upper_blue = np.array([111,255,251])
    
    mask = cv2.inRange(hsv,lower_blue,upper_blue)
    mask_inv = cv2.bitwise_not(mask)

    IL = cv2.bitwise_and(frame, frame, mask=mask_inv)
    CL = cv2.bitwise_and(replace, replace, mask=mask)

    final_img = cv2.add(IL,CL)

    cv2.imshow('image', final_img)


    if cv2.waitKey(50) & 0xFF == ord('q'):
        break

cam.release()
cv2.destroyAllWindows()


