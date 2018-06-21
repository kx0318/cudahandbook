# :pen:The CUDA Handbook: A Comprehensive Guide to GPU Programming

## Contents

### OriginalSourceCodes (Original source codes from the author Nicholas Wilt)

1. atomics
2. chLib (The CUDA Handbook Library)
3. concurrency
4. corr
5. driverAPI
6. histogram
7. memory
8. microbench
9. nbody
10. reduction
11. scan
12. SMs
13. streaming
14. texturing

### Chapters (Source codes of each chapter in the book)

#### Part I: Fundamental

1. Chapter 1: Background
2. Chapter 2: Hardware Architecture
3. Chapter 3: Software Architecture
4. Chapter 4: Software Environment

#### Part II: CUDA Programming 

5. Chapter 5: Memory
6. Chapter 6: Streams and Events
7. Chapter 7: Kernel Execution
8. Chapter 8: Streaming Multiprocessors
9. Chapter 9: Multiple GPUs
10. Chapter 10: Texturing

#### Part III: Examples

11. Chapter 11: Streaming Workloads
12. Chapter 12: Reduction
13. Chapter 13: Scan
14. Chapter 14: N-Body
15. Chapter 15: Image Processing: Normalized Correlation

#### Appendix

16. Appendix A The CUDA Handbook Library
 
### Notes (My learning notes)

#### Part I: Fundamental

1. Chapter 1: Background
2. Chapter 2: Hardware Architecture
3. Chapter 3: Software Architecture
4. Chapter 4: Software Environment

#### Part II: CUDA Programming 

5. Chapter 5: Memory
6. Chapter 6: Streams and Events
7. Chapter 7: Kernel Execution
8. Chapter 8: Streaming Multiprocessors
9. Chapter 9: Multiple GPUs
10. Chapter 10: Texturing

#### Part III: Examples

11. Chapter 11: Streaming Workloads
12. Chapter 12: Reduction
13. Chapter 13: Scan
14. Chapter 14: N-Body
15. Chapter 15: Image Processing: Normalized Correlation

#### Appendix

16. Appendix A The CUDA Handbook Library

## Perface

>If you are reading this book, I probably don’t have to sell you on CUDA. Readers of this book should already be familiar with CUDA from using NVIDIA’s SDK materials and documentation, taking a course on parallel programming, or reading the excellent introductory book CUDA by Example (Addison-Wesley, 2011) by Jason Sanders and Edward Kandrot.

>Reviewing CUDA by Example, I am still struck by how much ground the book covers. Assuming no special knowledge from the audience, the authors manage to describe everything from memory types and their applications to graphics interoperability and even atomic operations. It is an excellent introduction to CUDA, but it is just that: an introduction. When it came to giving more detailed descriptions of the workings of the platform, the GPU hardware, the compiler driver nvcc, and important “building block” parallel algorithms like parallel prefix sum (“scan”), Jason and Edward rightly left those tasks to others.

>This book is intended to help novice to intermediate CUDA programmers continue to elevate their game, building on the foundation laid by earlier work. In addition, while introductory texts are best read from beginning to end, The CUDA Handbook can be sampled. If you’re preparing to build or program a new CUDA-capable platform, a review of Chapter 2 (“Hardware Architecture”) might be in order. If you are wondering whether your application would benefit from using CUDA streams for additional concurrency, take a look at Chapter 6 (“Streams and Events”). Other chapters give detailed descriptions of the software architecture, GPU subsystems such as texturing and the streaming multiprocessors, and applications chosen according to their data access pattern and their relative importance in the universe of parallel algorithms. The chapters are relatively self-contained, though they do reference one another when appropriate.

>The latest innovations, up to and including CUDA 5.0, also are covered here. In the last few years, CUDA and its target platforms have significantly evolved.

>When CUDA by Example was published, the GeForce GTX 280 (GT200) was new, but since then, two generations of CUDA-capable hardware have become available. So besides more detailed discussions of existing features such as mapped pinned memory, this book also covers new instructions like Fermi’s “ballot” and Kepler’s “shuffle” and features such as 64-bit and unified virtual addressing and dynamic parallelism. We also discuss recent platform innovations, such as the integration of the PCI Express bus controller into Intel’s “Sandy Bridge” CPUs.

>However you choose to read the book—whether you read it straight through or keep it by your keyboard and consult it periodically—it’s my sincerest hope that you will enjoy reading it as much as I enjoyed writing it.

## About the author

>Nicholas Wilt has been programming computers professionally for more than twenty-five years in a variety of areas, including industrial machine vision, graphics, and low-level multimedia software. While at Microsoft, he served as the development lead for Direct3D 5.0 and 6.0, built the prototype for the Windows Desktop Manager, and did early GPU computing work. At NVIDIA, he worked on CUDA from the beginning, designing and often implementing most of CUDA’s low-level abstractions. Now at Amazon, Mr. Wilt is working in cloud computing technologies relating to GPUs.