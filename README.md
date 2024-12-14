# LiDAR Based Lane Navigation System

A robust lane detection and navigation system that utilizes LiDAR point cloud data instead of traditional camera-based approaches. Our system provides reliable lane detection and autonomous navigation capabilities that are immune to challenging lighting conditions and adverse weather.

## Key Features
- LiDAR-based lane detection using Point Transformer V3
- Robust point cloud registration using KISS-ICP
- Buffered mapping for increased robustness and blind zone handling
- Real-time performance with optimized preprocessing pipeline
- Works reliably in various lighting conditions including night-time
- Integration with GEM E2 and E4 autonomous vehicle platform

## Technical Pipeline
1. LiDAR point cloud acquisition
2. Point cloud preprocessing and filtering
3. KISS-ICP odometry for precise localization
4. Point Transformer V3 inference for lane detection
5. Frame matching and buffered mapping
6. Lane detection and waypoint generation
7. Autonomous vehicle control

## Demo Video
[Watch our system in action](https://www.youtube.com/watch?v=ihDA-dlf1ts)

The video demonstrates:
- Real-time lane detection using LiDAR point clouds
- Buffered mapping system and waypoint generation
- System performance in different lighting conditions
- Autonomous navigation capabilities
