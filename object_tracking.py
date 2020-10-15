import cv2

vid = cv2.VideoCapture('resources/traffic.mp4')

tracker = cv2.TrackerMOSSE_create()

while True:
    success, frame = vid.read()
    timer = cv2.getTickCount()

    fps = cv2.getTickFrequency()/(cv2.getTickCount()-timer)
    cv2.putText(frame, str(int(fps)), (70,50), cv2.FONT_HERSHEY_COMPLEX, 0.5, (0,0,255), thickness=1, lineType=None, bottomLeftOrigin=None)
    cv2.imshow("tracking", frame)

    if cv2.waitKey(1) & 0xff == ord('q'):
        break
        
