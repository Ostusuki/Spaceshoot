# Spaceshoot
# Bài tập cuối khóa môn LTNC 
* Tên sinh viên: Lương Xuân Bách 
* MSV: 21020002
* Lớp: K66CC
# Hướng dẫn cài đặt 
* Download thư viện đồ họa SFML bản 2.5.1 về máy.
* Download các thư mục game từ github về máy.
* Chạy tệp SFML_GAME_TEST.sln bằng Visual Studio.
* Nhấn F5 để khởi động chương trình và vào game.
# Mô tả chung về trò chơi 
* Điều khiển 1 tàu không gian trong chuyến hành trình di chuyển trong vũ trụ được trang bị hệ thống vũ khí có thể phá các thiên thạch trong không gian để có thể vượt qua được các "cơn mưa" thiên thạch và đưa được tàu của mình đi xa nhất có thể. 
* Sử dung các nút điều hướng (lên, xuống, trái, phải) để tàu di chuyển và điều hướng bắn, nhấn "Space" để khai hỏa.
* Người chơi điều khiển tàu của mình để sống sót được lâu nhất có thể để đạt được số điểm cao nhất, bắn phá các thiên thể để được cộng thêm điểm.
# Các chức năng đã cài đặt 
* Cài đặt hệ thống bảng menu: vào game, bảng số điểm cao nhất và thoát game.
* Cài đặt âm nhạc và các hiệu ứng âm thanh phù hợp với từng chi tiết game.
* Cài đặt game play của game để phù hợp với game Spaceshoot:
  * Hình nền chuyển động tạo hiệu ứng tàu di chuyển trong thời gian thực.
  * Cách thức di chuyển, chuyển động của tàu.
  * Hướng và cách thức chuyển động của các thiên thạch.
* Hệ thống mạng và tính điểm cho người chơi.
* Hệ thống bảng điểm có báo điểm số và điểm cao nhất của game.
* Bảng điểm cao nhất: hiển thị 5 điểm số cao nhất của game.
* Có thể chơi lại nhiều lần.

# Các kĩ thuật lập trình được sử dụng trong chương trình
* Class
* Mảng tĩnh 
* Mảng động
* Con trỏ
* Liên kết nhiều file
* Đọc, ghi file
* Sử dụng thư viện đồ họa SFML
# Kết Luận, hướng phát triển và các điều tâm đắc rút ra được sau khi hoàn thiện chương trình
* Game trên là game em lấy ý tưởng từ game Space shooter em rất thích chơi trên điện thoại nhưng nó đã điều chỉnh game play để phù hợp chơi trên máy tính, code do em tự viết.
* Tuy nhiên do thời gian có hạn nên game em chưa thực sự hoàn thiện, trong tương lại cải tiến hơn về mặt đồ họa, có nhiều hiệu ứng về âm thanh, hình ảnh bắt mắt hơn, thêm được các cơ chế mua vật phẩm và viết lại code một cách khoa học, dễ quản lí hơn.
* Qua dự án lần này, em cũng rút ra được kinh nghiệm quản lí nhiều file trong 1 chương trình, tầm quan trọng của việc lên kế hoạch, quản lí sắp xếp các lớp, cấu trúc trong chương trình phù hợp với logic, chia nhỏ chương trình để dễ quản lí hơn.
