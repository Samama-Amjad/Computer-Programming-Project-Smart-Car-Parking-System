gantt
    title Smart Parking Hybrid DBMS - Project Timeline
    dateFormat  YYYY-MM-DD
    axisFormat  Week %W
    
    section Hardware Setup
    Program ESP32 Key           :done, a1, 2024-06-03, 7d
    Test USB Serial Output      :done, a2, 2024-06-03, 7d
    
    section C++ Software Dev
    Setup fstream & Creation    :done, b1, 2024-06-03, 14d
    Write Append & Unique Logic :active, b2, 2024-06-10, 7d
    Write Search & Update Logic :active, b3, 2024-06-10, 14d
    
    section System Integration
    Implement Windows Serial API:c1, 2024-06-17, 7d
    Lock C++ Menu behind Auth   :c2, 2024-06-17, 14d
    
    section Testing & Docs
    Generate Dummy Records      :d1, 2024-06-24, 7d
    System Edge-Case Testing    :d2, 2024-06-24, 7d
    Finalize Report & Videos    :d3, 2024-06-24, 7d
